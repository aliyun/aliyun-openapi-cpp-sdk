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

#ifndef ALIBABACLOUD_XSPACE_MODEL_QUERYCUSTOMERBYPHONERESULT_H_
#define ALIBABACLOUD_XSPACE_MODEL_QUERYCUSTOMERBYPHONERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/xspace/XspaceExport.h>

namespace AlibabaCloud
{
	namespace Xspace
	{
		namespace Model
		{
			class ALIBABACLOUD_XSPACE_EXPORT QueryCustomerByPhoneResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct CustomizeFields
					{
						std::string mainAccountUid;
						std::string abcUrl;
						std::vector<std::string> associatePersonList;
						std::string distributionLevel;
						std::string tag;
						std::string associatePerson;
						std::string cid;
					};
					std::string email;
					std::string phone;
					std::string nick;
					CustomizeFields customizeFields;
					std::string photo;
					std::string id;
					std::string gender;
					std::string realName;
					std::string detail;
					std::vector<std::string> tags;
				};


				QueryCustomerByPhoneResult();
				explicit QueryCustomerByPhoneResult(const std::string &payload);
				~QueryCustomerByPhoneResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_XSPACE_MODEL_QUERYCUSTOMERBYPHONERESULT_H_