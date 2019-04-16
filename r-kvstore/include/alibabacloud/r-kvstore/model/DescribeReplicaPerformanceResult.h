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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICAPERFORMANCERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICAPERFORMANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeReplicaPerformanceResult : public ServiceResult
			{
			public:
				struct PerformanceKeys
				{
					struct PerformanceKeyItem
					{
						struct PerformanceValues
						{
							struct PerformanceValueItem
							{
								std::string value;
								std::string date;
							};
							std::vector<PerformanceValueItem> performanceValue;
						};
						PerformanceValues performanceValues;
						std::string valueFormat;
						std::string unit;
						std::string key;
					};
					std::vector<PerformanceKeyItem> performanceKey;
				};


				DescribeReplicaPerformanceResult();
				explicit DescribeReplicaPerformanceResult(const std::string &payload);
				~DescribeReplicaPerformanceResult();
				PerformanceKeys getPerformanceKeys()const;
				std::string getEndTime()const;
				std::string getStartTime()const;
				std::string getReplicaId()const;

			protected:
				void parse(const std::string &payload);
			private:
				PerformanceKeys performanceKeys_;
				std::string endTime_;
				std::string startTime_;
				std::string replicaId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICAPERFORMANCERESULT_H_