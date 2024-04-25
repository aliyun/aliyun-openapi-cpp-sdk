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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_GETIMAGERESULT_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_GETIMAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>

namespace AlibabaCloud
{
	namespace EhpcInstant
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPCINSTANT_EXPORT GetImageResult : public ServiceResult
			{
			public:
				struct Image
				{
					struct ContainerImageSpec
					{
						struct RegistryCredential
						{
							std::string userName;
							std::string server;
							std::string password;
						};
						bool isACRRegistry;
						std::string registryCriId;
						bool isACREnterprise;
						RegistryCredential registryCredential;
						std::string registryUrl;
					};
					struct VMImageSpec
					{
						std::string platform;
						std::string architecture;
						std::string version;
						std::string imageId;
						std::string osTag;
					};
					ContainerImageSpec containerImageSpec;
					std::string description;
					std::string appId;
					std::string version;
					std::string size;
					std::string createTime;
					std::string label;
					std::string updateTime;
					VMImageSpec vMImageSpec;
					std::string imageType;
					std::string name;
				};


				GetImageResult();
				explicit GetImageResult(const std::string &payload);
				~GetImageResult();
				int getTotalCount()const;
				Image getImage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				Image image_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_GETIMAGERESULT_H_