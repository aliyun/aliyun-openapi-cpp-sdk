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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTPARAMETERVERSIONSRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_LISTPARAMETERVERSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT ListParameterVersionsResult : public ServiceResult
			{
			public:
				struct ParameterVersion
				{
					std::string updatedBy;
					int parameterVersion;
					std::string updatedDate;
					std::string value;
				};


				ListParameterVersionsResult();
				explicit ListParameterVersionsResult(const std::string &payload);
				~ListParameterVersionsResult();
				std::vector<ParameterVersion> getParameterVersions()const;
				std::string getType()const;
				int getTotalCount()const;
				std::string getDescription()const;
				std::string getCreatedBy()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::string getCreatedDate()const;
				std::string getId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ParameterVersion> parameterVersions_;
				std::string type_;
				int totalCount_;
				std::string description_;
				std::string createdBy_;
				std::string nextToken_;
				int maxResults_;
				std::string createdDate_;
				std::string id_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_LISTPARAMETERVERSIONSRESULT_H_