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

#ifndef ALIBABACLOUD_ACM_MODEL_DESCRIBECONFIGURATIONRESULT_H_
#define ALIBABACLOUD_ACM_MODEL_DESCRIBECONFIGURATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/acm/AcmExport.h>

namespace AlibabaCloud
{
	namespace Acm
	{
		namespace Model
		{
			class ALIBABACLOUD_ACM_EXPORT DescribeConfigurationResult : public ServiceResult
			{
			public:
				struct Configuration
				{
					std::string desc;
					std::string group;
					std::string type;
					std::string dataId;
					std::string content;
					std::string tags;
					std::string appName;
					std::string md5;
				};


				DescribeConfigurationResult();
				explicit DescribeConfigurationResult(const std::string &payload);
				~DescribeConfigurationResult();
				Configuration getConfiguration()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				Configuration configuration_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACM_MODEL_DESCRIBECONFIGURATIONRESULT_H_