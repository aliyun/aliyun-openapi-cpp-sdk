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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETCLIENTUSERRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_GETCLIENTUSERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT GetClientUserResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Department
					{
						std::string id;
						std::string name;
					};
					std::string status;
					Department department;
					std::string mobileNumber;
					std::string description;
					std::string email;
					std::string username;
					std::string userId;
					std::string id;
					std::string departmentId;
					std::string idpConfigId;
				};


				GetClientUserResult();
				explicit GetClientUserResult(const std::string &payload);
				~GetClientUserResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_GETCLIENTUSERRESULT_H_