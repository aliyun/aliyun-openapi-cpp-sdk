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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKCALLLISTREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKCALLLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT QueryRobotTaskCallListRequest : public RpcServiceRequest
			{

			public:
				QueryRobotTaskCallListRequest();
				~QueryRobotTaskCallListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCalled()const;
				void setCalled(const std::string& called);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDialogCountFrom()const;
				void setDialogCountFrom(const std::string& dialogCountFrom);
				std::string getDurationTo()const;
				void setDurationTo(const std::string& durationTo);
				std::string getHangupDirection()const;
				void setHangupDirection(const std::string& hangupDirection);
				std::string getDialogCountTo()const;
				void setDialogCountTo(const std::string& dialogCountTo);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDurationFrom()const;
				void setDurationFrom(const std::string& durationFrom);
				int getPageNo()const;
				void setPageNo(int pageNo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCallResult()const;
				void setCallResult(const std::string& callResult);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				long resourceOwnerId_;
				std::string called_;
				std::string resourceOwnerAccount_;
				std::string dialogCountFrom_;
				std::string durationTo_;
				std::string hangupDirection_;
				std::string dialogCountTo_;
				long ownerId_;
				std::string accessKeyId_;
				std::string durationFrom_;
				int pageNo_;
				int pageSize_;
				std::string callResult_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKCALLLISTREQUEST_H_