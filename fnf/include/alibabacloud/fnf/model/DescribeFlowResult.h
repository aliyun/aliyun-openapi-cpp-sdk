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

#ifndef ALIBABACLOUD_FNF_MODEL_DESCRIBEFLOWRESULT_H_
#define ALIBABACLOUD_FNF_MODEL_DESCRIBEFLOWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/fnf/FnfExport.h>

namespace AlibabaCloud
{
	namespace Fnf
	{
		namespace Model
		{
			class ALIBABACLOUD_FNF_EXPORT DescribeFlowResult : public ServiceResult
			{
			public:


				DescribeFlowResult();
				explicit DescribeFlowResult(const std::string &payload);
				~DescribeFlowResult();
				std::string getType()const;
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getDefinition()const;
				std::string getLastModifiedTime()const;
				std::string getExecutionMode()const;
				std::string getId()const;
				std::string getExternalStorageLocation()const;
				std::string getRoleArn()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string type_;
				std::string description_;
				std::string createdTime_;
				std::string definition_;
				std::string lastModifiedTime_;
				std::string executionMode_;
				std::string id_;
				std::string externalStorageLocation_;
				std::string roleArn_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FNF_MODEL_DESCRIBEFLOWRESULT_H_