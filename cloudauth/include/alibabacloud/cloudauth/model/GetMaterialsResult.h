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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT GetMaterialsResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string facePic;
					std::string identificationNumber;
					std::string idCardStartDate;
					std::string address;
					std::string idCardFrontPic;
					std::string ethnicGroup;
					std::string authority;
					std::string sex;
					std::string idCardExpiry;
					std::string idCardType;
					std::string idCardBackPic;
					std::string name;
				};


				GetMaterialsResult();
				explicit GetMaterialsResult(const std::string &payload);
				~GetMaterialsResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSRESULT_H_