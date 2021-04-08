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


				DescribeSubscriptionInstanceStatusResult();
				explicit DescribeSubscriptionInstanceStatusResult(const std::string &payload);
				~DescribeSubscriptionInstanceStatusResult();
				std::string getStatus()const;
				std::string getTaskId()const;
				SubscriptionHost getSubscriptionHost()const;
				std::string getEndTimestamp()const;
				std::string getPayType()const;
				std::string getErrMessage()const;
				std::string getSubscriptionInstanceID()const;
				std::string getSuccess()const;
				std::string getErrCode()const;
				SubscriptionDataType getSubscriptionDataType()const;
				std::vector<SynchronousObject> getSubscriptionObject()const;
				std::string getConsumptionCheckpoint()const;
				std::string getSubscriptionInstanceName()const;
				std::string getSubscribeTopic()const;
				std::string getErrorMessage1()const;
				std::string getConsumptionClient()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getErrorMessage()const;
				std::string getBeginTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string taskId_;
				SubscriptionHost subscriptionHost_;
				std::string endTimestamp_;
				std::string payType_;
				std::string errMessage_;
				std::string subscriptionInstanceID_;
				std::string success_;
				std::string errCode_;
				SubscriptionDataType subscriptionDataType_;
				std::vector<SynchronousObject> subscriptionObject_;
				std::string consumptionCheckpoint_;
				std::string subscriptionInstanceName_;
				std::string subscribeTopic_;
				std::string errorMessage1_;
				std::string consumptionClient_;
				SourceEndpoint sourceEndpoint_;
				std::string errorMessage_;
				std::string beginTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESULT_H_