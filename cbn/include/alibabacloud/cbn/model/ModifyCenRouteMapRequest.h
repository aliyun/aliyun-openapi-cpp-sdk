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

#ifndef ALIBABACLOUD_CBN_MODEL_MODIFYCENROUTEMAPREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_MODIFYCENROUTEMAPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT ModifyCenRouteMapRequest : public RpcServiceRequest
			{

			public:
				ModifyCenRouteMapRequest();
				~ModifyCenRouteMapRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCommunityMatchMode()const;
				void setCommunityMatchMode(const std::string& communityMatchMode);
				std::string getMapResult()const;
				void setMapResult(const std::string& mapResult);
				int getNextPriority()const;
				void setNextPriority(int nextPriority);
				std::vector<std::string> getDestinationCidrBlocks()const;
				void setDestinationCidrBlocks(const std::vector<std::string>& destinationCidrBlocks);
				std::vector<std::string> getSourceInstanceIds()const;
				void setSourceInstanceIds(const std::vector<std::string>& sourceInstanceIds);
				std::vector<std::string> getSourceRegionIds()const;
				void setSourceRegionIds(const std::vector<std::string>& sourceRegionIds);
				std::vector<int> getMatchAsns()const;
				void setMatchAsns(const std::vector<int>& matchAsns);
				int getPreference()const;
				void setPreference(int preference);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPriority()const;
				void setPriority(int priority);
				std::vector<std::string> getDestinationChildInstanceTypes()const;
				void setDestinationChildInstanceTypes(const std::vector<std::string>& destinationChildInstanceTypes);
				std::vector<std::string> getSourceRouteTableIds()const;
				void setSourceRouteTableIds(const std::vector<std::string>& sourceRouteTableIds);
				std::vector<std::string> getSourceChildInstanceTypes()const;
				void setSourceChildInstanceTypes(const std::vector<std::string>& sourceChildInstanceTypes);
				std::string getCommunityOperateMode()const;
				void setCommunityOperateMode(const std::string& communityOperateMode);
				std::vector<std::string> getOperateCommunitySet()const;
				void setOperateCommunitySet(const std::vector<std::string>& operateCommunitySet);
				std::vector<std::string> getRouteTypes()const;
				void setRouteTypes(const std::vector<std::string>& routeTypes);
				std::string getCidrMatchMode()const;
				void setCidrMatchMode(const std::string& cidrMatchMode);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getSourceInstanceIdsReverseMatch()const;
				void setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch);
				std::vector<std::string> getDestinationRouteTableIds()const;
				void setDestinationRouteTableIds(const std::vector<std::string>& destinationRouteTableIds);
				std::vector<std::string> getDestinationInstanceIds()const;
				void setDestinationInstanceIds(const std::vector<std::string>& destinationInstanceIds);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getDestinationInstanceIdsReverseMatch()const;
				void setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch);
				std::string getRouteMapId()const;
				void setRouteMapId(const std::string& routeMapId);
				std::vector<long> getPrependAsPath()const;
				void setPrependAsPath(const std::vector<long>& prependAsPath);
				std::string getAsPathMatchMode()const;
				void setAsPathMatchMode(const std::string& asPathMatchMode);
				std::vector<std::string> getMatchCommunitySet()const;
				void setMatchCommunitySet(const std::vector<std::string>& matchCommunitySet);
				std::string getCenRegionId()const;
				void setCenRegionId(const std::string& cenRegionId);

            private:
				long resourceOwnerId_;
				std::string communityMatchMode_;
				std::string mapResult_;
				int nextPriority_;
				std::vector<std::string> destinationCidrBlocks_;
				std::vector<std::string> sourceInstanceIds_;
				std::vector<std::string> sourceRegionIds_;
				std::vector<int> matchAsns_;
				int preference_;
				long ownerId_;
				int priority_;
				std::vector<std::string> destinationChildInstanceTypes_;
				std::vector<std::string> sourceRouteTableIds_;
				std::vector<std::string> sourceChildInstanceTypes_;
				std::string communityOperateMode_;
				std::vector<std::string> operateCommunitySet_;
				std::vector<std::string> routeTypes_;
				std::string cidrMatchMode_;
				std::string cenId_;
				std::string description_;
				bool sourceInstanceIdsReverseMatch_;
				std::vector<std::string> destinationRouteTableIds_;
				std::vector<std::string> destinationInstanceIds_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				bool destinationInstanceIdsReverseMatch_;
				std::string routeMapId_;
				std::vector<long> prependAsPath_;
				std::string asPathMatchMode_;
				std::vector<std::string> matchCommunitySet_;
				std::string cenRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_MODIFYCENROUTEMAPREQUEST_H_