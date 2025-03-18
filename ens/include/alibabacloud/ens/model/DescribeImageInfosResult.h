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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEIMAGEINFOSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEIMAGEINFOSRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeImageInfosResult : public ServiceResult
			{
			public:
				struct Image
				{
					struct DiskDeviceMapping
					{
						std::string type;
						std::string format;
						std::string size;
						std::string imageId;
					};
					std::vector<Image::DiskDeviceMapping> diskDeviceMappings;
					std::string description;
					std::string imageVersion;
					std::string imageSize;
					std::string oSType;
					std::string imageId;
					std::string oSName;
					std::string regionId;
					std::string computeType;
				};


				DescribeImageInfosResult();
				explicit DescribeImageInfosResult(const std::string &payload);
				~DescribeImageInfosResult();
				std::vector<Image> getImages()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Image> images_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEIMAGEINFOSRESULT_H_