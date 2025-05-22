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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEPOSTGRESEXTENSIONSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEPOSTGRESEXTENSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribePostgresExtensionsResult : public ServiceResult
			{
			public:
				struct Extension
				{
					std::string comment;
					std::string uid;
					std::string owner;
					std::string category;
					std::string installedVersion;
					std::string requires;
					std::string priority;
					std::string defaultVersion;
					std::string name;
				};


				DescribePostgresExtensionsResult();
				explicit DescribePostgresExtensionsResult(const std::string &payload);
				~DescribePostgresExtensionsResult();
				std::vector<Extension> getInstalledExtensions()const;
				std::string getOverview()const;
				std::vector<Extension> getUninstalledExtensions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Extension> installedExtensions_;
				std::string overview_;
				std::vector<Extension> uninstalledExtensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEPOSTGRESEXTENSIONSRESULT_H_