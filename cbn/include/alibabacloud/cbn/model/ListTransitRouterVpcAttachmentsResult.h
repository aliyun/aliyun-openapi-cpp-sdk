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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPCATTACHMENTSRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPCATTACHMENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterVpcAttachmentsResult : public ServiceResult
			{
			public:
				struct TransitRouterAttachment
				{
					struct ZoneMapping
					{
						std::string zoneId;
						std::string vSwitchId;
						std::string networkInterfaceId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string transitRouterAttachmentId;
					std::string transitRouterAttachmentName;
					std::string resourceType;
					std::vector<TransitRouterAttachment::ZoneMapping> zoneMappings;
					std::string serviceMode;
					long vpcOwnerId;
					bool autoPublishRouteEnabled;
					std::string orderType;
					std::string vpcId;
					std::string chargeType;
					std::string creationTime;
					std::string cenId;
					std::string vpcRegionId;
					std::vector<TransitRouterAttachment::Tag> tags;
					std::string transitRouterAttachmentDescription;
					std::string transitRouterId;
				};


				ListTransitRouterVpcAttachmentsResult();
				explicit ListTransitRouterVpcAttachmentsResult(const std::string &payload);
				~ListTransitRouterVpcAttachmentsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<TransitRouterAttachment> getTransitRouterAttachments()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<TransitRouterAttachment> transitRouterAttachments_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPCATTACHMENTSRESULT_H_