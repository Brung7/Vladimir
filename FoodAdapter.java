package com.example.qiuckpick.adapter;

import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.example.qiuckpick.FfLayoutActivity;
import com.example.qiuckpick.R;
import com.example.qiuckpick.model.food;

import java.util.List;

public class FoodAdapter extends RecyclerView.Adapter<FoodAdapter.FoodViewHolder> {

    Context context;
    List<food> foods;

    public FoodAdapter(Context context, List<food> foods) {
        this.context = context;
        this.foods = foods;
    }

    @NonNull
    @Override
    public FoodViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View FoodItems = LayoutInflater.from(context).inflate(R.layout.food_item, parent, false);
        return new FoodAdapter.FoodViewHolder(FoodItems);
    }

    @Override
    public void onBindViewHolder(@NonNull FoodViewHolder holder, int position) {
        holder.ff_bg.setBackgroundColor(Color.parseColor(foods.get(position).getColor()));
        int imageId = context.getResources().getIdentifier("ic_" + foods.get(position).getImg(), "drawable", context.getPackageName());
        holder.ff_image.setImageResource(imageId);
        holder.ff_title.setText(foods.get(position).getTitle());
        holder.itemView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(context,FfLayoutActivity.class);
                context.startActivity(intent);
            }
        });

    }



    @Override
    public int getItemCount() {
        return foods.size();
    }

    public static final class FoodViewHolder extends RecyclerView.ViewHolder{

        LinearLayout ff_bg;
        ImageView ff_image;
        TextView ff_title;

        public FoodViewHolder(@NonNull View itemView) {
            super(itemView);
            ff_bg = itemView.findViewById(R.id.ff_bg);
            ff_image = itemView.findViewById(R.id.ff_image);
            ff_title = itemView.findViewById(R.id.ff_title);

        }

    }
}
