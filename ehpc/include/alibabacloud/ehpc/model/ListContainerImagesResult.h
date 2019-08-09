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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListContainerImagesResult : public ServiceResult
			{
			public:
				struct ImagesItem
				{
					std::string status;
					std::string type;
					std::string repository;
					std::string imageId;
					std::string updateDateTime;
					std::string tag;
					std::string system;
				};


				ListContainerImagesResult();
				explicit ListContainerImagesResult(const std::string &payload);
				~ListContainerImagesResult();
				int getTotalCount()const;
				std::string getDBInfo()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ImagesItem> getImages()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string dBInfo_;
				int pageSize_;
				int pageNumber_;
				std::vector<ImagesItem> images_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESRESULT_H_