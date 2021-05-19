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

#ifndef ALIBABACLOUD_SCSP_MODEL_CREATETICKETWITHBIZDATAREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_CREATETICKETWITHBIZDATAREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT CreateTicketWithBizDataRequest : public RpcServiceRequest
			{

			public:
				CreateTicketWithBizDataRequest();
				~CreateTicketWithBizDataRequest();

				std::string getFromInfo()const;
				void setFromInfo(const std::string& fromInfo);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getCarbonCopy()const;
				void setCarbonCopy(const std::string& carbonCopy);
				long getCreatorId()const;
				void setCreatorId(long creatorId);
				std::string getBizData()const;
				void setBizData(const std::string& bizData);
				long getTemplateId()const;
				void setTemplateId(long templateId);
				int getPriority()const;
				void setPriority(int priority);
				std::string getFormData()const;
				void setFormData(const std::string& formData);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getCreatorType()const;
				void setCreatorType(int creatorType);
				std::string getCreatorName()const;
				void setCreatorName(const std::string& creatorName);
				long getCategoryId()const;
				void setCategoryId(long categoryId);
				std::string getMemberName()const;
				void setMemberName(const std::string& memberName);
				long getMemberId()const;
				void setMemberId(long memberId);

            private:
				std::string fromInfo_;
				std::string clientToken_;
				std::string carbonCopy_;
				long creatorId_;
				std::string bizData_;
				long templateId_;
				int priority_;
				std::string formData_;
				std::string instanceId_;
				int creatorType_;
				std::string creatorName_;
				long categoryId_;
				std::string memberName_;
				long memberId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_CREATETICKETWITHBIZDATAREQUEST_H_