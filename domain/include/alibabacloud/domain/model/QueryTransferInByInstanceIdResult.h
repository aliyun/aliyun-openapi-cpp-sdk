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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYTRANSFERINBYINSTANCEIDRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYTRANSFERINBYINSTANCEIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryTransferInByInstanceIdResult : public ServiceResult
			{
			public:


				QueryTransferInByInstanceIdResult();
				explicit QueryTransferInByInstanceIdResult(const std::string &payload);
				~QueryTransferInByInstanceIdResult();
				int getStatus()const;
				std::string getTransferAuthorizationCodeSubmissionDate()const;
				std::string getEmail()const;
				int getProgressBarType()const;
				std::string getInstanceId()const;
				std::string getDomainName()const;
				long getSubmissionDateLong()const;
				std::string getSubmissionDate()const;
				std::string getSimpleTransferInStatus()const;
				long getTransferAuthorizationCodeSubmissionDateLong()const;
				long getExpirationDateLong()const;
				std::string getExpirationDate()const;
				bool getNeedMailCheck()const;
				std::string getUserId()const;
				std::string getModificationDate()const;
				long getResultDateLong()const;
				std::string getResultMsg()const;
				bool getWhoisMailStatus()const;
				long getModificationDateLong()const;
				std::string getResultCode()const;
				std::string getResultDate()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				std::string transferAuthorizationCodeSubmissionDate_;
				std::string email_;
				int progressBarType_;
				std::string instanceId_;
				std::string domainName_;
				long submissionDateLong_;
				std::string submissionDate_;
				std::string simpleTransferInStatus_;
				long transferAuthorizationCodeSubmissionDateLong_;
				long expirationDateLong_;
				std::string expirationDate_;
				bool needMailCheck_;
				std::string userId_;
				std::string modificationDate_;
				long resultDateLong_;
				std::string resultMsg_;
				bool whoisMailStatus_;
				long modificationDateLong_;
				std::string resultCode_;
				std::string resultDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYTRANSFERINBYINSTANCEIDRESULT_H_