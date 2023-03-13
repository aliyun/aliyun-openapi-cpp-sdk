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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPNATTACHMENTSRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPNATTACHMENTSRESULT_H_

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
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterVpnAttachmentsResult : public ServiceResult
			{
			public:
				struct TransitRouterAttachment
				{
					struct ZoneMapping
					{
						std::string zoneId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string transitRouterAttachmentId;
					long vpnOwnerId;
					std::string transitRouterAttachmentName;
					std::string resourceType;
					std::vector<TransitRouterAttachment::ZoneMapping> zones;
					bool autoPublishRouteEnabled;
					std::string vpnRegionId;
					std::string chargeType;
					std::string creationTime;
					std::string cenId;
					std::vector<TransitRouterAttachment::Tag> tags;
					std::string transitRouterAttachmentDescription;
					std::string transitRouterId;
					std::string vpnId;
				};


				ListTransitRouterVpnAttachmentsResult();
				explicit ListTransitRouterVpnAttachmentsResult(const std::string &payload);
				~ListTransitRouterVpnAttachmentsResult();
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
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVPNATTACHMENTSRESULT_H_