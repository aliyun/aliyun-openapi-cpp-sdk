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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCUSTOMIMAGESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCUSTOMIMAGESRESULT_H_

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
			class ALIBABACLOUD_EHPC_EXPORT ListCustomImagesResult : public ServiceResult
			{
			public:
				struct ImageInfo
				{
					struct BaseOsTag
					{
						std::string platform;
						std::string architecture;
						std::string version;
						std::string osTag;
					};
					std::string imageOwnerAlias;
					std::string status;
					std::string uid;
					std::string imageName;
					std::string description;
					std::string postInstallScript;
					std::string productCode;
					std::string skuCode;
					std::string pricingCycle;
					int size;
					std::string imageId;
					BaseOsTag baseOsTag;
				};


				ListCustomImagesResult();
				explicit ListCustomImagesResult(const std::string &payload);
				~ListCustomImagesResult();
				std::vector<ImageInfo> getImages()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ImageInfo> images_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCUSTOMIMAGESRESULT_H_