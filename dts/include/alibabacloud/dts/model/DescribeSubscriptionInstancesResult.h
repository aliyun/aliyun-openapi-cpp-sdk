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
					struct SubscriptionHost
					{
						std::string publicHost;
						std::string privateHost;
						std::string vPCHost;
					};
					struct SynchronousObject
					{
						std::string databaseName;
						std::string wholeDatabase;
						std::vector<std::string> tableList;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					SubscriptionHost subscriptionHost;
					std::string endTimestamp;
					std::string payType;
					std::string subscriptionInstanceID;
					SubscriptionDataType subscriptionDataType;
					std::vector<SubscriptionInstance::SynchronousObject> subscriptionObject;
					std::string consumptionCheckpoint;
					std::string subscriptionInstanceName;
					std::string subscribeTopic;
					std::string consumptionClient;
					SourceEndpoint sourceEndpoint;
					std::string errorMessage;
					std::string beginTimestamp;
					std::vector<SubscriptionInstance::Tag> tags;
				};


				DescribeSubscriptionInstancesResult();
				explicit DescribeSubscriptionInstancesResult(const std::string &payload);
				~DescribeSubscriptionInstancesResult();
				long getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::string getErrMessage()const;
				std::vector<SubscriptionInstance> getSubscriptionInstances()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::string errMessage_;
				std::vector<SubscriptionInstance> subscriptionInstances_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESRESULT_H_