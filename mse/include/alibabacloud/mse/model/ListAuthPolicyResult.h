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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTAUTHPOLICYRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTAUTHPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListAuthPolicyResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Policy
					{
						struct AuthRuleItem
						{
							struct Method
							{
								std::string group;
								std::string version;
								std::string serviceName;
								std::vector<std::string> parameterTypes;
								std::string returnType;
								std::string name;
							};
							std::string path;
							std::vector<std::string> k8sNamespaces;
							Method method;
							bool black;
							int authType;
							std::vector<std::string> appIds;
						};
						int status;
						std::string accountId;
						std::string source;
						std::string appName;
						std::string name;
						std::string k8sNamespace;
						std::string appId;
						bool enable;
						std::string namespaceId;
						std::string regionId;
						int id;
						int authType;
						std::vector<Policy::AuthRuleItem> authRule;
						std::string protocol;
					};
					int pageSize;
					int pageNumber;
					int totalSize;
					std::vector<Policy> result;
				};


				ListAuthPolicyResult();
				explicit ListAuthPolicyResult(const std::string &payload);
				~ListAuthPolicyResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTAUTHPOLICYRESULT_H_