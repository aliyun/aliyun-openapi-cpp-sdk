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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateImagePipelineRequest : public RpcServiceRequest {
public:
	struct ImageOptions {
		std::string imageName;
		std::string imageFamily;
		std::string description;
		struct ImageFeatures {
			std::string nvmeSupport;
		};
		ImageFeatures imageFeatures;
		struct ImageTagsItem {
			std::string key;
			std::string value;
		};
		ImageTagsItem imageTagsItem;
		std::vector<ImageTagsItem> imageTags;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct AdvancedOptions {
		bool retainCloudAssistant;
		bool skipBuildImage;
		bool skipCheckImage;
		std::string imageNameSuffix;
	};
	struct ImportImageOptions {
		std::string architecture;
		std::string oSType;
		std::string platform;
		std::string bootMode;
		std::string licenseType;
		struct DiskDeviceMappingsItem {
			std::string oSSBucket;
			std::string oSSObject;
			std::string format;
			int diskImageSize;
		};
		DiskDeviceMappingsItem diskDeviceMappingsItem;
		std::vector<DiskDeviceMappingsItem> diskDeviceMappings;
		struct Features {
			std::string nvmeSupport;
		};
		Features features;
		bool retainImportedImage;
	};
	CreateImagePipelineRequest();
	~CreateImagePipelineRequest();
	std::string getBaseImageType() const;
	void setBaseImageType(const std::string &baseImageType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	ImageOptions getImageOptions() const;
	void setImageOptions(const ImageOptions &imageOptions);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	AdvancedOptions getAdvancedOptions() const;
	void setAdvancedOptions(const AdvancedOptions &advancedOptions);
	std::string getRepairMode() const;
	void setRepairMode(const std::string &repairMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::vector<long> getAddAccount() const;
	void setAddAccount(const std::vector<long> &addAccount);
	bool getDeleteInstanceOnFailure() const;
	void setDeleteInstanceOnFailure(bool deleteInstanceOnFailure);
	std::string getName() const;
	void setName(const std::string &name);
	ImportImageOptions getImportImageOptions() const;
	void setImportImageOptions(const ImportImageOptions &importImageOptions);
	std::string getTestContent() const;
	void setTestContent(const std::string &testContent);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getToRegionId() const;
	void setToRegionId(const std::vector<std::string> &toRegionId);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getNvmeSupport() const;
	void setNvmeSupport(const std::string &nvmeSupport);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getBaseImage() const;
	void setBaseImage(const std::string &baseImage);
	std::string getImageFamily() const;
	void setImageFamily(const std::string &imageFamily);
	std::string getBuildContent() const;
	void setBuildContent(const std::string &buildContent);

private:
	std::string baseImageType_;
	long resourceOwnerId_;
	std::string resourceGroupId_;
	ImageOptions imageOptions_;
	int systemDiskSize_;
	std::vector<Tag> tag_;
	AdvancedOptions advancedOptions_;
	std::string repairMode_;
	long ownerId_;
	std::string vSwitchId_;
	std::vector<long> addAccount_;
	bool deleteInstanceOnFailure_;
	std::string name_;
	ImportImageOptions importImageOptions_;
	std::string testContent_;
	std::string clientToken_;
	std::vector<std::string> toRegionId_;
	int internetMaxBandwidthOut_;
	std::string description_;
	std::string regionId_;
	std::string imageName_;
	std::string instanceType_;
	std::string nvmeSupport_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string baseImage_;
	std::string imageFamily_;
	std::string buildContent_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_
