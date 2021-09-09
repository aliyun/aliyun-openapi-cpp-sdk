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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT AcceptPartnerNotificationRequest : public RpcServiceRequest
			{

			public:
				AcceptPartnerNotificationRequest();
				~AcceptPartnerNotificationRequest();

				std::string getCertificateEndTime()const;
				void setCertificateEndTime(const std::string& certificateEndTime);
				int getApplicationStatus()const;
				void setApplicationStatus(int applicationStatus);
				std::string getCertificateNumber()const;
				void setCertificateNumber(const std::string& certificateNumber);
				std::string getOfficialFileURL()const;
				void setOfficialFileURL(const std::string& officialFileURL);
				std::string getCertificateStartTime()const;
				void setCertificateStartTime(const std::string& certificateStartTime);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string certificateEndTime_;
				int applicationStatus_;
				std::string certificateNumber_;
				std::string officialFileURL_;
				std::string certificateStartTime_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_