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

#ifndef ALIBABACLOUD_MTS_MODEL_UPDATEMCTEMPLATEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_UPDATEMCTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT UpdateMCTemplateRequest : public RpcServiceRequest
			{

			public:
				UpdateMCTemplateRequest();
				~UpdateMCTemplateRequest();

				std::string getPolitics()const;
				void setPolitics(const std::string& politics);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAbuse()const;
				void setAbuse(const std::string& abuse);
				std::string getQrcode()const;
				void setQrcode(const std::string& qrcode);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPorn()const;
				void setPorn(const std::string& porn);
				std::string getTerrorism()const;
				void setTerrorism(const std::string& terrorism);
				std::string getLogo()const;
				void setLogo(const std::string& logo);
				std::string getLive()const;
				void setLive(const std::string& live);
				std::string getContraband()const;
				void setContraband(const std::string& contraband);
				std::string getAd()const;
				void setAd(const std::string& ad);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSpam()const;
				void setSpam(const std::string& spam);

            private:
				std::string politics_;
				long resourceOwnerId_;
				std::string abuse_;
				std::string qrcode_;
				std::string accessKeyId_;
				std::string porn_;
				std::string terrorism_;
				std::string logo_;
				std::string live_;
				std::string contraband_;
				std::string ad_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string templateId_;
				std::string name_;
				std::string spam_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_UPDATEMCTEMPLATEREQUEST_H_