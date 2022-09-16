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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEDRIVERESULT_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEDRIVERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT CreateDriveResult : public ServiceResult
			{
			public:
				struct Drive
				{
					std::string status;
					std::string description;
					bool profileRoaming;
					std::string gmtModified;
					std::string driveId;
					std::string externalDriveId;
					long totalSize;
					long usedSize;
					std::string name;
					std::string gmtCreate;
					std::string type;
					std::string domainId;
					std::string userId;
					std::string externalUserId;
					std::string id;
					std::string aliUid;
				};


				CreateDriveResult();
				explicit CreateDriveResult(const std::string &payload);
				~CreateDriveResult();
				std::string getMessage()const;
				Drive getDrive()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Drive drive_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEDRIVERESULT_H_