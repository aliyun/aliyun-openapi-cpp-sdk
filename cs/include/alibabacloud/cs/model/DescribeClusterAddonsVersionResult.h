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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONSVERSIONRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONSVERSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClusterAddonsVersionResult : public ServiceResult
			{
			public:


				DescribeClusterAddonsVersionResult();
				explicit DescribeClusterAddonsVersionResult(const std::string &payload);
				~DescribeClusterAddonsVersionResult();
				std::string getPolicy()const;
				std::string getNext_version()const;
				std::string get_Template()const;
				bool getCan_upgrade()const;
				bool getExist()const;
				std::string getMessage()const;
				bool getRequired()const;
				std::string getVersion()const;
				bool getForce()const;
				std::string getReady_to_upgrade()const;
				std::string getChanged()const;
				std::string getComponent_name()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string policy_;
				std::string next_version_;
				std::string _template_;
				bool can_upgrade_;
				bool exist_;
				std::string message_;
				bool required_;
				std::string version_;
				bool force_;
				std::string ready_to_upgrade_;
				std::string changed_;
				std::string component_name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONSVERSIONRESULT_H_