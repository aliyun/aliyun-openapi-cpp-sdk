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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_SYNCPODINFOREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_SYNCPODINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT SyncPodInfoRequest : public RpcServiceRequest
			{

			public:
				SyncPodInfoRequest();
				~SyncPodInfoRequest();

				std::string getReason()const;
				void setReason(const std::string& reason);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getPodName()const;
				void setPodName(const std::string& podName);
				std::string getSideCarType()const;
				void setSideCarType(const std::string& sideCarType);
				long getTaskId()const;
				void setTaskId(long taskId);
				bool getStatus()const;
				void setStatus(bool status);

            private:
				std::string reason_;
				std::string requestId_;
				std::string podName_;
				std::string sideCarType_;
				long taskId_;
				bool status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_SYNCPODINFOREQUEST_H_