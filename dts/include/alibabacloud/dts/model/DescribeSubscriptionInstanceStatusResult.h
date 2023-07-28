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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESULT_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeSubscriptionInstanceStatusResult : public ServiceResult
			{
			public:
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


				DescribeSubscriptionInstanceStatusResult();
				explicit DescribeSubscriptionInstanceStatusResult(const std::string &payload);
				~DescribeSubscriptionInstanceStatusResult();
				std::string getStatus()const;
				SubscriptionDataType getSubscriptionDataType()const;
				std::vector<SynchronousObject> getSubscriptionObject()const;
				std::string getSubscriptionInstanceName()const;
				std::string getConsumptionCheckpoint()const;
				std::string getConsumptionClient()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getEndTimestamp()const;
				std::string getPayType()const;
				std::string getErrorMessage()const;
				std::string getSubscriptionInstanceID()const;
				std::string getBeginTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				SubscriptionDataType subscriptionDataType_;
				std::vector<SynchronousObject> subscriptionObject_;
				std::string subscriptionInstanceName_;
				std::string consumptionCheckpoint_;
				std::string consumptionClient_;
				SourceEndpoint sourceEndpoint_;
				std::string endTimestamp_;
				std::string payType_;
				std::string errorMessage_;
				std::string subscriptionInstanceID_;
				std::string beginTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESULT_H_