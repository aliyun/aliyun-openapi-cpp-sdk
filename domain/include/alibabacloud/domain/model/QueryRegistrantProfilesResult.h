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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESRESULT_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT QueryRegistrantProfilesResult : public ServiceResult
			{
			public:
				struct RegistrantProfile
				{
					std::string zhProvince;
					bool defaultRegistrantProfile;
					std::string email;
					std::string telephone;
					std::string address;
					std::string realNameStatus;
					std::string postalCode;
					long registrantProfileId;
					std::string remark;
					std::string registrantProfileType;
					std::string zhRegistrantOrganization;
					std::string credentialType;
					int emailVerificationStatus;
					std::string registrantOrganization;
					std::string telArea;
					std::string zhAddress;
					std::string registrantType;
					std::string createTime;
					std::string zhRegistrantName;
					std::string city;
					std::string province;
					std::string credentialNo;
					std::string zhCity;
					std::string registrantName;
					std::string updateTime;
					std::string country;
					std::string telExt;
				};


				QueryRegistrantProfilesResult();
				explicit QueryRegistrantProfilesResult(const std::string &payload);
				~QueryRegistrantProfilesResult();
				bool getPrePage()const;
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<RegistrantProfile> getRegistrantProfiles()const;
				int getTotalItemNum()const;
				bool getNextPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool prePage_;
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<RegistrantProfile> registrantProfiles_;
				int totalItemNum_;
				bool nextPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESRESULT_H_