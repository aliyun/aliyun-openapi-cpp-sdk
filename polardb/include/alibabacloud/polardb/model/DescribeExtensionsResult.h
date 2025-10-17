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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEEXTENSIONSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEEXTENSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeExtensionsResult : public ServiceResult
			{
			public:
				struct UninstalledExtensionsItem
				{
					std::string comment;
					std::string owner;
					std::string category;
					std::string installedVersion;
					std::string requires;
					std::string priority;
					std::string defaultVersion;
					std::string restart;
					std::string name;
				};
				struct InstalledExtensionsItem
				{
					std::string comment;
					std::string owner;
					std::string category;
					std::string installedVersion;
					std::string requires;
					std::string priority;
					std::string defaultVersion;
					std::string restart;
					std::string name;
				};


				DescribeExtensionsResult();
				explicit DescribeExtensionsResult(const std::string &payload);
				~DescribeExtensionsResult();
				std::vector<InstalledExtensionsItem> getInstalledExtensions()const;
				std::string getOverview()const;
				std::vector<UninstalledExtensionsItem> getUninstalledExtensions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstalledExtensionsItem> installedExtensions_;
				std::string overview_;
				std::vector<UninstalledExtensionsItem> uninstalledExtensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEEXTENSIONSRESULT_H_