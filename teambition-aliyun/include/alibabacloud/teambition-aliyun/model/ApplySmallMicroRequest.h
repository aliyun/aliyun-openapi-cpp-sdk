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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_APPLYSMALLMICROREQUEST_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_APPLYSMALLMICROREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teambition-aliyun/Teambition_aliyunExport.h>

namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		namespace Model
		{
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT ApplySmallMicroRequest : public RpcServiceRequest
			{

			public:
				ApplySmallMicroRequest();
				~ApplySmallMicroRequest();

				std::string getApplicantEmail()const;
				void setApplicantEmail(const std::string& applicantEmail);
				std::string getDevelopScale()const;
				void setDevelopScale(const std::string& developScale);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getApplicantPosition()const;
				void setApplicantPosition(const std::string& applicantPosition);
				std::string getDevelopLanguage()const;
				void setDevelopLanguage(const std::string& developLanguage);
				std::string getOrgName()const;
				void setOrgName(const std::string& orgName);
				std::string getApplicantTel()const;
				void setApplicantTel(const std::string& applicantTel);
				std::string getSolution()const;
				void setSolution(const std::string& solution);
				std::string getForHelp()const;
				void setForHelp(const std::string& forHelp);
				std::string getApplicantName()const;
				void setApplicantName(const std::string& applicantName);
				std::string getBusinessModel()const;
				void setBusinessModel(const std::string& businessModel);

            private:
				std::string applicantEmail_;
				std::string developScale_;
				std::string type_;
				std::string orgId_;
				std::string applicantPosition_;
				std::string developLanguage_;
				std::string orgName_;
				std::string applicantTel_;
				std::string solution_;
				std::string forHelp_;
				std::string applicantName_;
				std::string businessModel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_APPLYSMALLMICROREQUEST_H_