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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSubscriptionInstancesResult : public ServiceResult
			{
			public:
				struct SubscriptionInstance
				{
					struct SourceEndpoint
					{
						std::string instanceID;
						std::string instanceType;
					};
					struct SubscriptionDataType
					{
						bool dML;
						bool dDL;
					};
					struct SynchronousObject
					{
						std::string databaseName;
						std::string wholeDatabase;
						std::vector<std::string> tableList;
					};
					std::string status;
					SubscriptionDataType subscriptionDataType;
					std::vector<SubscriptionInstance::SynchronousObject> subscriptionObject;
					std::string subscriptionInstanceName;
					std::string consumptionCheckpoint;
					std::string consumptionClient;
					SourceEndpoint sourceEndpoint;
					std::string endTimestamp;
					std::string payType;
					std::string errorMessage;
					std::string subscriptionInstanceID;
					std::string beginTimestamp;
				};


				DescribeSubscriptionInstancesResult();
				explicit DescribeSubscriptionInstancesResult(const std::string &payload);
				~DescribeSubscriptionInstancesResult();
				long getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<SubscriptionInstance> getSubscriptionInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<SubscriptionInstance> subscriptionInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESRESULT_H_