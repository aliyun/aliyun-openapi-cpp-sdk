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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_COMPOSEPLANOGRAMPOSITIONSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_COMPOSEPLANOGRAMPOSITIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT ComposePlanogramPositionsRequest : public RpcServiceRequest
			{
			public:
				struct ShelfPositionInfo
				{
					float offsetFrom;
					float depth;
					std::string column;
					int facing;
					float offsetTo;
					std::string itemBarCode;
				};

			public:
				ComposePlanogramPositionsRequest();
				~ComposePlanogramPositionsRequest();

				std::string getActionType()const;
				void setActionType(const std::string& actionType);
				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getLayer()const;
				void setLayer(int layer);
				std::string getLayerOrigin()const;
				void setLayerOrigin(const std::string& layerOrigin);
				bool getBeAutoRefresh()const;
				void setBeAutoRefresh(bool beAutoRefresh);
				std::string getShelf()const;
				void setShelf(const std::string& shelf);
				std::vector<ShelfPositionInfo> getShelfPositionInfo()const;
				void setShelfPositionInfo(const std::vector<ShelfPositionInfo>& shelfPositionInfo);

            private:
				std::string actionType_;
				std::string extraParams_;
				std::string storeId_;
				int layer_;
				std::string layerOrigin_;
				bool beAutoRefresh_;
				std::string shelf_;
				std::vector<ShelfPositionInfo> shelfPositionInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_COMPOSEPLANOGRAMPOSITIONSREQUEST_H_