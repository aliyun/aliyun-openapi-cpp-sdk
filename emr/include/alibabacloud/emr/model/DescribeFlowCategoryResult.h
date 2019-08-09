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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWCATEGORYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWCATEGORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowCategoryResult : public ServiceResult
			{
			public:


				DescribeFlowCategoryResult();
				explicit DescribeFlowCategoryResult(const std::string &payload);
				~DescribeFlowCategoryResult();
				std::string getParentId()const;
				std::string getObjectType()const;
				long getGmtCreate()const;
				std::string getType()const;
				std::string getObjectId()const;
				long getGmtModified()const;
				std::string getProjectId()const;
				std::string getId()const;
				std::string getCategoryType()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string parentId_;
				std::string objectType_;
				long gmtCreate_;
				std::string type_;
				std::string objectId_;
				long gmtModified_;
				std::string projectId_;
				std::string id_;
				std::string categoryType_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWCATEGORYRESULT_H_