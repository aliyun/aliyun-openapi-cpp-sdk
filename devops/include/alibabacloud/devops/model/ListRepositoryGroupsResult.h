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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYGROUPSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListRepositoryGroupsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					std::string path;
					std::string pathWithNamespace;
					long parentId;
					std::string description;
					long groupCount;
					std::string createdAt;
					std::string nameWithNamespace;
					std::string webUrl;
					long projectCount;
					int visibilityLevel;
					std::string updatedAt;
					int accessLevel;
					std::string name;
					std::string type;
					std::string avatarUrl;
					long ownerId;
					long id;
				};


				ListRepositoryGroupsResult();
				explicit ListRepositoryGroupsResult(const std::string &payload);
				~ListRepositoryGroupsResult();
				std::vector<ResultItem> getresult()const;
				std::string getRequestId()const;
				long getTotal()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;
				std::string requestId_;
				long total_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYGROUPSRESULT_H_