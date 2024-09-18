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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYREADABLERESOURCESLISTBYUSERIDRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYREADABLERESOURCESLISTBYUSERIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryReadableResourcesListByUserIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Directory
					{
						std::string pathId;
						std::string id;
						std::string pathName;
						std::string name;
					};
					int status;
					std::string modifyTime;
					std::string ownerName;
					std::string description;
					std::string workType;
					std::string modifyName;
					std::string createTime;
					std::string workspaceId;
					int thirdPartAuthFlag;
					std::string ownerId;
					std::string securityLevel;
					std::string workName;
					std::string workspaceName;
					std::string worksId;
					Directory directory;
				};


				QueryReadableResourcesListByUserIdResult();
				explicit QueryReadableResourcesListByUserIdResult(const std::string &payload);
				~QueryReadableResourcesListByUserIdResult();
				bool getSuccess()const;
				std::vector<Data> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				std::vector<Data> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYREADABLERESOURCESLISTBYUSERIDRESULT_H_