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

#ifndef ALIBABACLOUD_DBS_MODEL_STARTTASKREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_STARTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT StartTaskRequest : public RpcServiceRequest
			{

			public:
				StartTaskRequest();
				~StartTaskRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				std::string clientToken_;
				std::string ownerId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_STARTTASKREQUEST_H_