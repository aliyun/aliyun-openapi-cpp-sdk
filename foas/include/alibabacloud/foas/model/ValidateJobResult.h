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

#ifndef ALIBABACLOUD_FOAS_MODEL_VALIDATEJOBRESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_VALIDATEJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT ValidateJobResult : public ServiceResult
			{
			public:
				struct JobInOut
				{
					struct Input
					{
						std::string type;
						std::string alias;
						std::string properties;
						std::string workspace;
						std::string name;
					};
					struct Output
					{
						std::string type;
						std::string alias;
						std::string properties;
						std::string workspace;
						std::string name;
					};
					struct Dim
					{
						std::string type;
						std::string alias;
						std::string properties;
						std::string workspace;
						std::string name;
					};
					std::vector<Output> outputs;
					std::vector<Dim> dims;
					std::vector<Input> inputs;
				};


				ValidateJobResult();
				explicit ValidateJobResult(const std::string &payload);
				~ValidateJobResult();
				JobInOut getJobInOut()const;

			protected:
				void parse(const std::string &payload);
			private:
				JobInOut jobInOut_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_VALIDATEJOBRESULT_H_