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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListAlertMessagesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AlertMessagesItem
					{
						struct SlaAlert
						{
							std::string status;
							long baselineId;
							std::string baselineOwner;
							std::string baselineName;
							long projectId;
							long bizdate;
							int inGroupId;
						};
						struct InstancesItem
						{
							std::string status;
							long instanceId;
							std::string nodeName;
							long nodeId;
							long projectId;
						};
						struct TopicsItem
						{
							std::string topicOwner;
							long instanceId;
							long nodeId;
							long topicId;
							std::string topicStatus;
							std::string topicName;
						};
						struct NodesItem
						{
							std::string owner;
							std::string nodeName;
							long nodeId;
							long projectId;
						};
						std::string alertMessageStatus;
						std::string alertUser;
						std::vector<AlertMessagesItem::TopicsItem> topics;
						std::string alertMethod;
						std::vector<AlertMessagesItem::NodesItem> nodes;
						long alertTime;
						std::string source;
						std::vector<AlertMessagesItem::InstancesItem> instances;
						long remindId;
						long alertId;
						std::string content;
						SlaAlert slaAlert;
						std::string remindName;
					};
					std::string totalCount;
					std::string pageSize;
					std::string pageNumber;
					std::vector<AlertMessagesItem> alertMessages;
				};


				ListAlertMessagesResult();
				explicit ListAlertMessagesResult(const std::string &payload);
				~ListAlertMessagesResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESRESULT_H_