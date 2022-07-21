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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_LOOKUPTMCHNOTICERESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_LOOKUPTMCHNOTICERESULT_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT LookupTmchNoticeResult : public ServiceResult
			{
			public:
				struct Claim
				{
					struct JurDesc
					{
						std::string desc;
						std::string jurCC;
					};
					struct Contact
					{
						struct Addr
						{
							std::string cc;
							std::string pc;
							std::vector<std::string> street;
							std::string city;
							std::string sp;
						};
						std::string type;
						std::string email;
						std::string org;
						std::string fax;
						std::string voice;
						Addr addr;
						std::string name;
					};
					struct ClassDesc
					{
						int classNum;
						std::string desc;
					};
					struct Holder
					{
						struct Addr1
						{
							std::string cc;
							std::vector<std::string> street2;
							std::string pc;
							std::string city;
							std::string sp;
						};
						Addr1 addr1;
						std::string org;
						std::string entitlement;
					};
					std::string markName;
					JurDesc jurDesc;
					std::vector<Claim::Contact> contacts;
					std::string goodsAndServices;
					std::vector<Claim::ClassDesc> classDescs;
					std::vector<Claim::Holder> holders;
				};


				LookupTmchNoticeResult();
				explicit LookupTmchNoticeResult(const std::string &payload);
				~LookupTmchNoticeResult();
				std::vector<Claim> getClaims()const;
				std::string getLabel()const;
				long getId()const;
				std::string getNotBefore()const;
				std::string getNotAfter()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Claim> claims_;
				std::string label_;
				long id_;
				std::string notBefore_;
				std::string notAfter_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_LOOKUPTMCHNOTICERESULT_H_