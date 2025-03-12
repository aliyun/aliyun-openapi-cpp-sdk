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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEPIPELINESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEPIPELINESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeImagePipelinesResult : public ServiceResult
			{
			public:
				struct ImagePipelineSet
				{
					struct ImportImageOptions
					{
						struct Features
						{
							std::string nvmeSupport;
						};
						struct DiskDeviceMapping
						{
							std::string format;
							std::string oSSObject;
							int diskImageSize;
							std::string oSSBucket;
						};
						std::vector<DiskDeviceMapping> diskDeviceMappings;
						std::string architecture;
						std::string platform;
						std::string oSType;
						bool retainImportedImage;
						std::string bootMode;
						Features features;
						std::string licenseType;
					};
					struct AdvancedOptions
					{
						bool retainCloudAssistant;
						std::string imageNameSuffix;
						bool skipCheckImage;
						bool skipBuildImage;
					};
					struct ImageOptions
					{
						struct ImageFeatures
						{
							std::string nvmeSupport;
						};
						struct ImageTag
						{
							std::string tagKey;
							std::string tagValue;
						};
						std::string imageName;
						ImageFeatures imageFeatures;
						std::string description;
						std::string imageFamily;
						std::vector<ImageTag> imageTags;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string nvmeSupport;
					std::string description;
					std::string baseImageType;
					std::string resourceGroupId;
					int systemDiskSize;
					std::string imagePipelineId;
					std::string vSwitchId;
					std::string imageFamily;
					std::vector<std::string> toRegionIds;
					std::string repairMode;
					std::string name;
					AdvancedOptions advancedOptions;
					bool deleteInstanceOnFailure;
					std::string imageName;
					std::vector<std::string> addAccounts;
					int internetMaxBandwidthOut;
					ImportImageOptions importImageOptions;
					std::string creationTime;
					ImageOptions imageOptions;
					std::string instanceType;
					std::string testContent;
					std::vector<ImagePipelineSet::Tag> tags;
					std::string baseImage;
					std::string buildContent;
				};


				DescribeImagePipelinesResult();
				explicit DescribeImagePipelinesResult(const std::string &payload);
				~DescribeImagePipelinesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<ImagePipelineSet> getImagePipeline()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<ImagePipelineSet> imagePipeline_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEPIPELINESRESULT_H_