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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCEHISTORYRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCEHISTORYRESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListInstanceHistoryResult : public ServiceResult
			{
			public:
				struct InstancesItem
				{
					std::string status;
					long modifyTime;
					long instanceHistoryId;
					std::string dagType;
					long instanceId;
					std::string nodeName;
					long createTime;
					long cycTime;
					long beginWaitTimeTime;
					long dagId;
					long beginRunningTime;
					long bizdate;
					long finishTime;
					std::string taskType;
					long nodeId;
					long beginWaitResTime;
					std::string errorMessage;
				};


				ListInstanceHistoryResult();
				explicit ListInstanceHistoryResult(const std::string &payload);
				~ListInstanceHistoryResult();
				std::vector<InstancesItem> getInstances()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstancesItem> instances_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCEHISTORYRESULT_H_