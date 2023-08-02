/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEHEALTHSTATUSRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEHEALTHSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeHealthStatusResult : public ServiceResult
			{
			public:
				struct Status
				{
					struct Adbpg_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_connection_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_disk_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_disk_usage_percent
					{
						std::string status;
						float value;
					};
					struct Adbpg_master_disk_usage_percent_max
					{
						std::string status;
						float value;
					};
					struct Adbgp_segment_disk_usage_percent_max
					{
						std::string status;
						float value;
					};
					struct Node_master_status
					{
						std::string status;
						float value;
					};
					struct Node_segment_disk_status
					{
						std::string status;
						float value;
					};
					struct Node_master_connection_status
					{
						std::string status;
						float value;
					};
					struct Node_segment_connection_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_master_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_segment_status
					{
						std::string status;
						float value;
					};
					struct Adbpg_instance_total_data_gb
					{
						float value;
					};
					struct Adbpg_instance_hot_data_gb
					{
						float value;
					};
					struct Adbpg_instance_cold_data_gb
					{
						float value;
					};
					Adbpg_instance_cold_data_gb adbpg_instance_cold_data_gb;
					Node_master_connection_status node_master_connection_status;
					Node_master_status node_master_status;
					Node_segment_connection_status node_segment_connection_status;
					Adbpg_segment_status adbpg_segment_status;
					Adbpg_disk_usage_percent adbpg_disk_usage_percent;
					Node_segment_disk_status node_segment_disk_status;
					Adbpg_master_status adbpg_master_status;
					Adbpg_status adbpg_status;
					Adbgp_segment_disk_usage_percent_max adbgp_segment_disk_usage_percent_max;
					Adbpg_instance_hot_data_gb adbpg_instance_hot_data_gb;
					Adbpg_instance_total_data_gb adbpg_instance_total_data_gb;
					Adbpg_disk_status adbpg_disk_status;
					Adbpg_master_disk_usage_percent_max adbpg_master_disk_usage_percent_max;
					Adbpg_connection_status adbpg_connection_status;
				};


				DescribeHealthStatusResult();
				explicit DescribeHealthStatusResult(const std::string &payload);
				~DescribeHealthStatusResult();
				Status getStatus()const;
				std::string getDBClusterId()const;

			protected:
				void parse(const std::string &payload);
			private:
				Status status_;
				std::string dBClusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEHEALTHSTATUSRESULT_H_