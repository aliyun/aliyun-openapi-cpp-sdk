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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeExpressConnectTrafficQosResult : public ServiceResult
			{
			public:
				struct QosListItem
				{
					struct AssociatedInstanceListItem
					{
						std::string instanceId;
						std::string instanceStatus;
						int instanceProgressing;
						std::string instanceType;
					};
					struct QueueListItem
					{
						std::string status;
						std::string qosId;
						std::string queueId;
						std::string bandwidthPercent;
						std::string queueName;
						std::string queueDescription;
						std::string queueType;
					};
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string resourceGroupId;
					std::string qosId;
					std::string qosName;
					std::vector<QosListItem::AssociatedInstanceListItem> associatedInstanceList;
					std::vector<QosListItem::TagsItem> tags;
					std::string qosDescription;
					int progressing;
					std::vector<QosListItem::QueueListItem> queueList;
				};


				DescribeExpressConnectTrafficQosResult();
				explicit DescribeExpressConnectTrafficQosResult(const std::string &payload);
				~DescribeExpressConnectTrafficQosResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<QosListItem> getQosList()const;
				std::string getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<QosListItem> qosList_;
				std::string count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESULT_H_