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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_LISTCLUSTERSRESULT_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_LISTCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx3/SchedulerX3Export.h>

namespace AlibabaCloud
{
	namespace SchedulerX3
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX3_EXPORT ListClustersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Record
					{
						struct VswitchesItem
						{
							std::string zoneId;
							std::string vSwitchId;
						};
						int status;
						std::string engineVersion;
						std::string endTime;
						std::string clusterId;
						std::string internetDomain;
						std::string createTime;
						int productType;
						std::string clusterSpec;
						std::string spInstanceId;
						std::string vpcId;
						std::string chargeType;
						std::string clusterName;
						std::vector<Record::VswitchesItem> vSwitches;
						std::string engineType;
						std::string intranetDomain;
					};
					int pageSize;
					int pageNumber;
					int total;
					std::vector<Record> records;
				};


				ListClustersResult();
				explicit ListClustersResult(const std::string &payload);
				~ListClustersResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_LISTCLUSTERSRESULT_H_