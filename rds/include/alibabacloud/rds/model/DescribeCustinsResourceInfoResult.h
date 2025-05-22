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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECUSTINSRESOURCEINFORESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECUSTINSRESOURCEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeCustinsResourceInfoResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string iopsAdjustableMaxValue;
					std::string memoryIncreaseRatio;
					std::string originMemory;
					std::string cpuIncreaseRatioValue;
					std::string maxConnAdjustableMaxValue;
					std::string cpuIncreaseRatio;
					std::string maxConnIncreaseRatioValue;
					std::string memoryAdjustDeadline;
					std::string memoryIncreaseRatioValue;
					std::string cpuAdjustDeadline;
					std::string maxIopsAdjustDeadline;
					std::string maxIopsIncreaseRatio;
					std::string originCpu;
					std::string originMaxConn;
					std::string cpuAdjustableMaxRatio;
					std::string dBInstanceId;
					std::string maxConnAdjustDeadline;
					std::string memAdjustableMaxRatio;
					std::string cpuAdjustableMaxValue;
					std::string memAdjustableMaxValue;
					std::string originMaxIops;
					std::string maxConnIncreaseRatio;
					std::string maxIopsIncreaseRatioValue;
				};


				DescribeCustinsResourceInfoResult();
				explicit DescribeCustinsResourceInfoResult(const std::string &payload);
				~DescribeCustinsResourceInfoResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECUSTINSRESOURCEINFORESULT_H_