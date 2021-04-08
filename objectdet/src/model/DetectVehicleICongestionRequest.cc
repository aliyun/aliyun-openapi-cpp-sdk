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

#include <alibabacloud/objectdet/model/DetectVehicleICongestionRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVehicleICongestionRequest;

DetectVehicleICongestionRequest::DetectVehicleICongestionRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectVehicleICongestion")
{
	setMethod(HttpRequest::Method::Post);
}

DetectVehicleICongestionRequest::~DetectVehicleICongestionRequest()
{}

Array DetectVehicleICongestionRequest::getRoadRegions()const
{
	return roadRegions_;
}

void DetectVehicleICongestionRequest::setRoadRegions(const Array& roadRegions)
{
	roadRegions_ = roadRegions;
	for(int dep1 = 0; dep1!= roadRegions.size(); dep1++) {
		auto roadRegionsObj = roadRegions.at(dep1);
		std::string roadRegionsObjStr = "RoadRegions." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= roadRegionsObj.roadRegions.size(); dep2++) {
			auto roadRegionsObj = roadRegionsObj.roadRegions.at(dep2);
			std::string roadRegionsObjStr = roadRegionsObjStr + "RoadRegions." + std::to_string(dep2 + 1);
			for(int dep3 = 0; dep3!= roadRegionsObj.roadRegion.size(); dep3++) {
				auto roadRegionObj = roadRegionsObj.roadRegion.at(dep3);
				std::string roadRegionObjStr = roadRegionsObjStr + "RoadRegion." + std::to_string(dep3 + 1);
				for(int dep4 = 0; dep4!= roadRegionObj.roadRegionItem.size(); dep4++) {
					auto roadRegionItemObj = roadRegionObj.roadRegionItem.at(dep4);
					std::string roadRegionItemObjStr = roadRegionObjStr + "RoadRegionItem." + std::to_string(dep4 + 1);
					for(int dep5 = 0; dep5!= roadRegionItemObj.point.size(); dep5++) {
						auto pointObj = roadRegionItemObj.point.at(dep5);
						std::string pointObjStr = roadRegionItemObjStr + "Point." + std::to_string(dep5 + 1);
						setParameter(pointObjStr + ".X", std::to_string(pointObj.x));
						setParameter(pointObjStr + ".Y", std::to_string(pointObj.y));
					}
				}
			}
		}
	}
}

Array DetectVehicleICongestionRequest::getPreRegionIntersectFeatures()const
{
	return preRegionIntersectFeatures_;
}

void DetectVehicleICongestionRequest::setPreRegionIntersectFeatures(const Array& preRegionIntersectFeatures)
{
	preRegionIntersectFeatures_ = preRegionIntersectFeatures;
	for(int dep1 = 0; dep1!= preRegionIntersectFeatures.size(); dep1++) {
		auto preRegionIntersectFeaturesObj = preRegionIntersectFeatures.at(dep1);
		std::string preRegionIntersectFeaturesObjStr = "PreRegionIntersectFeatures." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= preRegionIntersectFeaturesObj.preRegionIntersectFeatures.size(); dep2++) {
			auto preRegionIntersectFeaturesObj = preRegionIntersectFeaturesObj.preRegionIntersectFeatures.at(dep2);
			std::string preRegionIntersectFeaturesObjStr = preRegionIntersectFeaturesObjStr + "PreRegionIntersectFeatures." + std::to_string(dep2 + 1);
			for(int dep3 = 0; dep3!= preRegionIntersectFeaturesObj.features.size(); dep3++) {
				auto featuresObj = preRegionIntersectFeaturesObj.features.at(dep3);
				std::string featuresObjStr = preRegionIntersectFeaturesObjStr + "Features." + std::to_string(dep3 + 1);
				setParameter(featuresObjStr + ".String", featuresObj.string);
			}
		}
	}
}

std::string DetectVehicleICongestionRequest::getImageURL()const
{
	return imageURL_;
}

void DetectVehicleICongestionRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

