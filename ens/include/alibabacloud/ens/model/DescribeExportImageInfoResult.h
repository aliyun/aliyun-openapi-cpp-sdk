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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEEXPORTIMAGEINFORESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEEXPORTIMAGEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeExportImageInfoResult : public ServiceResult
			{
			public:
				struct Image
				{
					std::string imageOwnerAlias;
					std::string imageName;
					std::string architecture;
					std::string platform;
					std::string exportedImageURL;
					std::string creationTime;
					std::string imageId;
					std::string imageExportStatus;
				};


				DescribeExportImageInfoResult();
				explicit DescribeExportImageInfoResult(const std::string &payload);
				~DescribeExportImageInfoResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Image> getImages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Image> images_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEEXPORTIMAGEINFORESULT_H_