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

#ifndef ALIBABACLOUD_SCSP_MODEL_CREATETICKETREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_CREATETICKETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT CreateTicketRequest : public RpcServiceRequest
			{

			public:
				CreateTicketRequest();
				~CreateTicketRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				long getTemplateId()const;
				void setTemplateId(long templateId);
				long getCategoryId()const;
				void setCategoryId(long categoryId);
				long getCreatorId()const;
				void setCreatorId(long creatorId);
				int getCreatorType()const;
				void setCreatorType(int creatorType);
				std::string getCreatorName()const;
				void setCreatorName(const std::string& creatorName);
				long getMemberId()const;
				void setMemberId(long memberId);
				std::string getMemberName()const;
				void setMemberName(const std::string& memberName);
				std::string getFromInfo()const;
				void setFromInfo(const std::string& fromInfo);
				int getPriority()const;
				void setPriority(int priority);
				std::string getCarbonCopy()const;
				void setCarbonCopy(const std::string& carbonCopy);
				std::string getFormData()const;
				void setFormData(const std::string& formData);

            private:
				std::string clientToken_;
				std::string instanceId_;
				long templateId_;
				long categoryId_;
				long creatorId_;
				int creatorType_;
				std::string creatorName_;
				long memberId_;
				std::string memberName_;
				std::string fromInfo_;
				int priority_;
				std::string carbonCopy_;
				std::string formData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_CREATETICKETREQUEST_H_