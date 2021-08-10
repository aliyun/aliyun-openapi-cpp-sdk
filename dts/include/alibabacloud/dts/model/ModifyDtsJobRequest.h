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

#ifndef ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT ModifyDtsJobRequest : public RpcServiceRequest
			{

			public:
				ModifyDtsJobRequest();
				~ModifyDtsJobRequest();

				std::string getDbList()const;
				void setDbList(const std::string& dbList);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getReserve()const;
				void setReserve(const std::string& reserve);
				std::string getDtsInstanceId()const;
				void setDtsInstanceId(const std::string& dtsInstanceId);
				std::string getSynchronizationDirection()const;
				void setSynchronizationDirection(const std::string& synchronizationDirection);

            private:
				std::string dbList_;
				std::string clientToken_;
				std::string ownerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string reserve_;
				std::string dtsInstanceId_;
				std::string synchronizationDirection_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBREQUEST_H_