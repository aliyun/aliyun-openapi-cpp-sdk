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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTSERVICEVERSIONSRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_LISTSERVICEVERSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT ListServiceVersionsResult : public ServiceResult
			{
			public:
				struct VersionsItem
				{
					std::string message;
					std::string imageAvailable;
					int imageId;
					std::string buildTime;
					std::string serviceRunnable;
				};


				ListServiceVersionsResult();
				explicit ListServiceVersionsResult(const std::string &payload);
				~ListServiceVersionsResult();
				long getTotalCount()const;
				std::vector<VersionsItem> getVersions()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<VersionsItem> versions_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_LISTSERVICEVERSIONSRESULT_H_