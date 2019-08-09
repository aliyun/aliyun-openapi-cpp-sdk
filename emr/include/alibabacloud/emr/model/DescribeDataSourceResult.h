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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeDataSourceResult : public ServiceResult
			{
			public:


				DescribeDataSourceResult();
				explicit DescribeDataSourceResult(const std::string &payload);
				~DescribeDataSourceResult();
				std::string getCategoryId()const;
				std::string getStatus()const;
				std::string getDescription()const;
				std::string getConf()const;
				std::string getClusterId()const;
				std::string getSourceType()const;
				long getGmtModified()const;
				std::string getCreator()const;
				std::string getCreateFrom()const;
				std::string getName()const;
				long getGmtCreate()const;
				std::string getId()const;
				std::string getModifier()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string categoryId_;
				std::string status_;
				std::string description_;
				std::string conf_;
				std::string clusterId_;
				std::string sourceType_;
				long gmtModified_;
				std::string creator_;
				std::string createFrom_;
				std::string name_;
				long gmtCreate_;
				std::string id_;
				std::string modifier_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCERESULT_H_