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

#ifndef ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_MTS_EXPORT UpdateTemplateRequest : public RpcServiceRequest
			{

			public:
				UpdateTemplateRequest();
				~UpdateTemplateRequest();

				std::string getContainer()const;
				void setContainer(const std::string& container);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getMuxConfig()const;
				void setMuxConfig(const std::string& muxConfig);
				std::string getVideo()const;
				void setVideo(const std::string& video);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getTransConfig()const;
				void setTransConfig(const std::string& transConfig);
				std::string getAudio()const;
				void setAudio(const std::string& audio);

            private:
				std::string container_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string muxConfig_;
				std::string video_;
				long ownerId_;
				std::string templateId_;
				std::string accessKeyId_;
				std::string name_;
				std::string transConfig_;
				std::string audio_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_