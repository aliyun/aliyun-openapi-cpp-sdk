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

#ifndef ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESREQUEST_H_
#define ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/lubancloud/LubancloudExport.h>

namespace AlibabaCloud
{
	namespace Lubancloud
	{
		namespace Model
		{
			class ALIBABACLOUD_LUBANCLOUD_EXPORT BuyOriginPicturesRequest : public RpcServiceRequest
			{

			public:
				BuyOriginPicturesRequest();
				~BuyOriginPicturesRequest();

				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::vector<long> getPictureId()const;
				void setPictureId(const std::vector<long>& pictureId);

            private:
				bool security_transport_;
				std::string app_ip_;
				std::string regionId_;
				long callerParentId_;
				std::string requestId_;
				std::string callerType_;
				bool ak_mfa_present_;
				long callerUid_;
				std::vector<long> pictureId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESREQUEST_H_